# MATCAP PLUGIN

## 1. Create a build folder in the root of this repo

```bash
cd ambf_pbr_plugin
mkdir build
cd build
cmake ..
make -j8
```

## 2. Set correct Matcap path in ADF files
The textures path is currently hard coded in ADF files ([monkey_with_matcap.yaml](ADF/Monkey/monkey.yaml) and [kuka_with_matcap.yaml](ADF/Kuka/kuka.yaml)). Change it (the following line) based on where your repo is only once.

```yaml
textures: {matcap: /home/adnanmunawar/ambf_matcap_plugin/ADF/Matcap/black_metal.jpg}
```
to 

```yaml
textures: {matcap: <your_location>/ambf_matcap_plugin/ADF/Matcap/black_metal.jpg}
```

Then run with ambf:

1. Object example

```bash
ambf_simulator -a ADF/Monkey/monkey_with_matcap.yaml
```

2. Model example
```bash
ambf_simulator -a ADF/Kuka/kuka_with_matcap.yaml
```

## 3. Note
You can use these examples with any AMBF model file. Make sure to have your model meshes saved as .OBJ file and not .STL files.