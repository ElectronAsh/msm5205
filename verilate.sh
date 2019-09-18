verilator --public --compiler msvc -Mdir out -Wno-lint -Wno-COMBDLY -Wno-INITIALDLY -Wno-UNOPTFLAT -LDFLAGS -lopenal --cc msm5205.v --exe sim_main.cpp

cd out
make -f Vmsm5205.mk
