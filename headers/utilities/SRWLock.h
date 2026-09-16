#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Management.Workplace.dll by Windissect. 2 member(s).
namespace Microsoft::WRL::Wrappers {
class SRWLock {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z
    static ::Microsoft::WRL::Wrappers::Details::SyncLockExclusive LockExclusive(_RTL_SRWLOCK *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z
    static ::Microsoft::WRL::Wrappers::Details::SyncLockShared LockShared(_RTL_SRWLOCK *);
};
} // namespace Microsoft::WRL::Wrappers
