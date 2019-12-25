export LD_LIBRARY_PATH=~/00_workspace/cwaveii_new/workspace/tool/lib

# g++ -std=c++11 main.cpp licence.cpp ../idl/licence.pb.cc \
#         -I"/home/qf/00_workspace/cwaveii_new/workspace/external/inc/google/protobuf"
#         -L"/home/qf/00_workspace/cwaveii_new/workspace/tool/lib/" -lprotobuf-lite

g++ -std=c++11 \
        main.cpp licence.cpp ../idl/licence.pb.cc \
        -L"/usr/local/lib/" -lprotobuf -lpthread \
        -o licence_gen \