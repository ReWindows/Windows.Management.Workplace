#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Management.Workplace.dll by Windissect. 5 member(s).
namespace Microsoft::WRL::Details {
class EventTargetArray {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z
    void AddTail(IUnknown *, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@EventTargetArray@Details@WRL@Microsoft@@QEAAJ_K@Z
    long RuntimeClassInitialize(uint64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1EventTargetArray@Details@WRL@Microsoft@@UEAA@XZ
    virtual ~EventTargetArray();
};
} // namespace Microsoft::WRL::Details
