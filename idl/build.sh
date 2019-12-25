# export LD_LIBRARY_PATH=~/00_workspace/cwaveii_new/workspace/tool/lib
# export CPLUS_INCLUDE_PATH="/home/qf/00_workspace/cwaveii_new/workspace/external/inc/google/protobuf"

protoc  \
    --proto_path=./ \
    --cpp_out=./ \
    licence.proto 