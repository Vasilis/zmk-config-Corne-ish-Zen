#!/bin/sh -e

rm -f corneish_zen_left.uf2 corneish_zen_right.uf2

SCRIPT_DIR="$(cd $(dirname "$0") && pwd)"

west build --pristine -s zmk/app -b corne-ish_zen_left -- -DZMK_CONFIG="$SCRIPT_DIR/config"
cp build/zephyr/zmk.uf2 corneish_zen_left.uf2

west build --pristine -s zmk/app -b corne-ish_zen_right -- -DZMK_CONFIG="$SCRIPT_DIR/config"
cp build/zephyr/zmk.uf2 corneish_zen_right.uf2
