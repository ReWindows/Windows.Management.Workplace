#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Management.Workplace.dll by Windissect. 3 member(s).
namespace Windows::Internal {
class ComTaskPoolHandler {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnComplete@ComTaskPoolHandler@Internal@Windows@@QEAAXXZ
    void OnComplete();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Start@ComTaskPoolHandler@Internal@Windows@@QEAAJPEAUIComPoolTask@23@@Z
    long Start(::Windows::Internal::IComPoolTask *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FireCompletion@ComTaskPoolHandler@Internal@Windows@@SAJPEAUIAsyncFireCompletion@23@@Z
    static long _FireCompletion(::Windows::Internal::IAsyncFireCompletion *);
};
} // namespace Windows::Internal
