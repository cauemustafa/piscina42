#!/bin/sh

COUNT=$(find . \( -type d -o -type f  \) ! -name '.*' | wc -l)

TOTAL_COUNT=$((COUNT + 1))
# +1 to include the current directorie ´.´

echo "$TOTAL_COUNT"
