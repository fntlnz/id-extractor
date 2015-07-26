# ID Extractor

This project is an OpenCV experiment operated by me and [@taueres](https://github.com/taueres).
Currently it's only a setup and it does nothing.

### Dependencies

**Red Hat, Fedora, etc.**
```
yum install cmake make gcc gcc-c++
```

**Debian, Ubuntu, etc.**
```
apt-get install cmake make gcc g++
```

**OpenCV 3.0.0 and OpenCV Contrib 3.0.0**

```
cd /tmp
wget -O opencv_3.0.0.tar.gz https://github.com/Itseez/opencv/archive/3.0.0.tar.gz
tar -xvf opencv_3.0.0.tar.gz
rm -f opencv_3.0.0.tar.gz
wget -O opencv_contrib_3.0.0.tar.gz https://github.com/Itseez/opencv_contrib/archive/3.0.0.tar.gz
tar -xvf opencv_contrib_3.0.0.tar.gz
rm -f opencv_contrib_3.0.0.tar.gz
cd opencv-3.0.0
cmake -DOPENCV_EXTRA_MODULES_PATH=opencv_contrib-3.0.0/modules .
make -j
```

### Build

Replace `Debug` with `Release` to generate Release Makefiles
```
cmake -DCMAKE_BUILD_TYPE=Debug  .
make -j
```

### Run

```
./bin/idextractor
```

### Tests

```
./bin/idextractortests
```

### Other commands

```
make vcs-clean # Clean vcs repository
```
