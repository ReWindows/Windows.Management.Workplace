#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Management.Workplace.dll by Windissect. 1 member(s).
class RpcOptionsHelper {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRpcOptions@RpcOptionsHelper@@SAJPEAUIUnknown@@_NPEAPEAUIRpcOptions@@@Z
    static long GetRpcOptions(IUnknown *, bool, IRpcOptions * *);
};
