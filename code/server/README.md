# Volume controller server

## Install from sources

### Create virtual env
```bash
python3 -m virtualenv venv
```

### Activate virtual env
```bash
source venv/bin/activate
```
### Install required modules
```bash
pip install -r requirements.txt
```

## Run program

```bash
python main.py
```

## Test

```bash
curl http://192.168.1.27:5000/volume?action=down
curl http://192.168.1.27:5000/volume?action=up
curl http://192.168.1.27:5000/volume?action=mute
```
