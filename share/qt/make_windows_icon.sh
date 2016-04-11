#!/bin/bash
# create multiresolution windows icon
ICON_DST=../../src/qt/res/icons/AlphabetCoinFund.ico

convert ../../src/qt/res/icons/AlphabetCoinFund-16.png ../../src/qt/res/icons/AlphabetCoinFund-32.png ../../src/qt/res/icons/AlphabetCoinFund-48.png ${ICON_DST}
