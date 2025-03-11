# MATCAP PLUGIN

Create a build folder in the root of this repo

```bash
cd ambf_pbr_plugin
mkdir build
cd build
cmake ..
make -j8
```

Then run with ambf

```bash
ambf_simulator -a ADF/monkey_with_matcap.yaml
```
