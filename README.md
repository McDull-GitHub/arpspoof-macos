## Installing

```shell
curl -LJO https://github.com/McDull-GitHub/arpspoof-macos/releases/download/v1.0/arpspoof
chmod a+x arpspoof
mv arpspoof /usr/local/bin/
sudo arpspoof
```

## Compiling

```shell
brew install cmake
brew install pkg-config
brew install libnet
brew install libpcap
ln -s /usr/local/opt/libpcap/lib/pkgconfig/libpcap.pc /usr/local/lib/pkgconfig/libpcap.pc
git clone https://github.com/McDull-GitHub/arpspoof-macos.git
cd arpspoof-macos
cmake . && make && make install
sudo arpspoof
```

## Usage

```shell
arpspoof [-i interface] [-c own|host|both] [-t target] [-r] host
```

## Example

```shell
sudo arpspoof -i en0 -t 192.168.1.1 192.168.1.123
```
