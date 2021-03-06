/* XCFrameworkEngine
 * Copyright (C) Abhishek Porwal, 2016
 * Any queries? Contact author <https://github.com/abhishekp314>
 * This program is complaint with GNU General Public License, version 3.
 * For complete license, read License.txt in source root directory. */

#pragma once


#include "Graphics/RenderTargetTypes.h"
#include "GPUResourceType.h"

#include "Base/System/ISystem.h"
#include "Base/Thread/CriticalSection.h"

class GPUResource;
class GPUResourceView;

class GPUResourceSystem : public ISystem
{
public:
    DECLARE_OBJECT_CREATION(GPUResourceSystem)

    static const u32     ConstantBufferAlignment
#if defined(XCGRAPHICS_DX12)
        = D3D12_CONSTANT_BUFFER_DATA_PLACEMENT_ALIGNMENT - 1;
#else
        = 255;
#endif

    void                 Init();
    void                 Destroy();

    //Constant Buffers
    GPUResource*         CreateConstantBufferResource(GPUResourceDesc& desc);
    void                 CreateConstantBufferView(GPUResource* res);
    GPUResource*         CreateConstantBufferResourceView(GPUResourceDesc& desc);

    //Texture
    GPUResource*         CreateTextureResource(D3D_TEXTURE2D_DESC& textureDesc, const D3D_SUBRESOURCE_DATA* subResourceData);
    GPUResource*         CreateRenderTextureResource(ID3DSwapChain* swapChain, RenderTargetsType type);

    //RenderTargetsViews
    //void               CreateRenderTargetView(D3D_TEXTURE2D_DESC& desc, GPUResource* gpuResource);
    void                 CreateRenderTargetView(GPUResource* gpuResource);

    //Depth Target Views
    void                 CreateDepthStencilView(GPUResource* gpuResource);

    //ShaderResourceViews
    void                 CreateShaderResourceView(D3D_SHADER_RESOURCE_VIEW_DESC& viewDesc, GPUResource* gpuResource);

    //Destruction of resources
    void                 DestroyResource(GPUResource* buffer);
};