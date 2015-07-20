# ID Extractor

This project is an OpenCV experiment operated by me and [@taueres](https://github.com/taueres).
Currently it's only a setup and it does nothing.

### Dependencies

```
yum install cmake make gcc gcc-c++
```

**OpenCV 3.0.0 and OpenCV Contrib 3.0.0**

```
cd /tmp
wget https://github.com/Itseez/opencv/archive/3.0.0.tar.gz
tar -xvf 3.0.0.tar.gz
rm -Rf 3.0.0.tar.gz
wget https://github.com/Itseez/opencv_contrib/archive/3.0.0.tar.gz
rm -Rf 3.0.0.tar.gz
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
