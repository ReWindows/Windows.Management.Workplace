#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Management.Workplace.dll by Windissect. 8 member(s).
namespace Microsoft::WRL {
class FtmBase {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisconnectObject@FtmBase@WRL@Microsoft@@UEAAJK@Z
    virtual long DisconnectObject(unsigned long);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0FtmBase@WRL@Microsoft@@QEAA@XZ
    FtmBase();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMarshalSizeMax@FtmBase@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAXK1KPEAK@Z
    virtual long GetMarshalSizeMax(_GUID const &, void *, unsigned long, void *, unsigned long, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUnmarshalClass@FtmBase@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAXK1KPEAU4@@Z
    virtual long GetUnmarshalClass(_GUID const &, void *, unsigned long, void *, unsigned long, _GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MarshalInterface@FtmBase@WRL@Microsoft@@UEAAJPEAUIStream@@AEBU_GUID@@PEAXK2K@Z
    virtual long MarshalInterface(IStream *, _GUID const &, void *, unsigned long, void *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseMarshalData@FtmBase@WRL@Microsoft@@UEAAJPEAUIStream@@@Z
    virtual long ReleaseMarshalData(IStream *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnmarshalInterface@FtmBase@WRL@Microsoft@@UEAAJPEAUIStream@@AEBU_GUID@@PEAPEAX@Z
    virtual long UnmarshalInterface(IStream *, _GUID const &, void * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z
    long CanCastTo(_GUID const &, void * *);
};
} // namespace Microsoft::WRL
