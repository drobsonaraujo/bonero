# Bonero

## About
Bonero is a Monero fork, created for fun and fair launched to the community.
Website: https://bonero.top/

## Building
### On Ubuntu/Debian
```sh
# Install all dependencies at once on Debian/Ubuntu:
sudo apt update && sudo apt install build-essential cmake pkg-config libssl-dev libzmq3-dev libunbound-dev libsodium-dev libunwind8-dev liblzma-dev libreadline6-dev libexpat1-dev qttools5-dev-tools libhidapi-dev libusb-1.0-0-dev libprotobuf-dev protobuf-compiler libudev-dev libboost-chrono-dev libboost-date-time-dev libboost-filesystem-dev libboost-locale-dev libboost-program-options-dev libboost-regex-dev libboost-serialization-dev libboost-system-dev libboost-thread-dev python3 ccache doxygen graphviz git curl autoconf libtool gperf

# Clone recursively to pull-in needed submodule(s):
git clone --recursive https://codeberg.org/bonero-project/bonero

# If you already have a repo cloned, initialize and update:
cd bonero && git submodule init && git submodule update

# build
make -j4
```
If you want to build static Linux binaries that work on multiple devices, replace the last line with:
```sh
make depends target=x86_64-linux-gnu -j4
```

## License
Copyright (c) 2025, The Bonero Project
Copyright (c) 2014-2024, The Monero Project
Portions Copyright (c) 2012-2013 The Cryptonote developers.
