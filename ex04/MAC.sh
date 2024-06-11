#!/bin/bash
ip link | awk "/ether/ {print \$2}"
