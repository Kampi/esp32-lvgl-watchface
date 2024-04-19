#/bin/bash
#  Copyright (c) 2024 Daniel Kampert
# Download script for LVGL based ESP32 watchfaces. See https://github.com/Kampi/esp32-lvgl-watchface for more informations

RED="\033[0;31m"
GREEN="\033[0;32m"
YELLOW="\033[01;33m"
CYAN="\033[0;36m"
NC="\033[0m"

if [ $# -ne 1 ]; then
    echo $0: usage: generate.sh URL-to-ESP32-Watchface
    exit 1
fi

if [ x"${ZSWATCH_ROOT}" == "x" ]; then 
    echo -e ${RED}"ZSWATCH_ROOT not set! Please set the environment variable before running this script."${NC}
    exit
fi

URL=$1
FILENAME=${URL##*/}
FILENAME_WITHOUT_ENDING=${FILENAME%%.*}

if test -f "download/${FILENAME}"; then
    echo -e ${GREEN}"Watchface ${FILENAME} exists. Use file from download directory"${NC}
    mv download/${FILENAME} ${FILENAME} 
else
    echo -e ${GREEN}"Download watchface ${FILENAME}"${NC}
    wget ${1}
fi

mkdir -p ${ZSWATCH_ROOT}/app/src/images/assets_watchfaces

# Generate the code
kotlinc bin2lvgl.kt -include-runtime -d bin2lvgl.jar && java -jar bin2lvgl.jar ${FILENAME} && mkdir -p ${ZSWATCH_ROOT}/app/src/ui/watchfaces/${FILENAME_WITHOUT_ENDING} && cp ${FILENAME_WITHOUT_ENDING}/* ${ZSWATCH_ROOT}/app/src/ui/watchfaces/${FILENAME_WITHOUT_ENDING}/
mv ${FILENAME} download/${FILENAME}

# Copy the preview image
mkdir -p previews/${FILENAME_WITHOUT_ENDING}
cp ${FILENAME_WITHOUT_ENDING}/watchface.png previews/${FILENAME_WITHOUT_ENDING}/watchface.png

# Copy all assets into the ZSWatch project
cd assets_watchfaces
mv */* .
rm -r ${FILENAME_WITHOUT_ENDING}
cd ..
mv assets_watchfaces/* ${ZSWATCH_ROOT}/app/src/images/assets_watchfaces