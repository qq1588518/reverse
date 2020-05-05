//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol MTLBuffer, MTLCommandQueue, MTLDevice, MTLLibrary, MTLRenderPipelineState, MTLSamplerState, WBFPlayerLayerMetalTextureAdaptor;

@interface WBFPlayerLayerMetalRenderer : NSObject
{
    struct {
        unsigned int metalDidSetup:1;
    } _flags;
    id <MTLDevice> _device;
    id <MTLLibrary> _library;
    id <MTLRenderPipelineState> _pipelineState;
    id <MTLCommandQueue> _commandQueue;
    id <MTLBuffer> _vertexBuffer;
    id <MTLBuffer> _colorConversion;
    id <MTLSamplerState> _sampler;
    id <WBFPlayerLayerMetalTextureAdaptor> _textureAdaptorVideoToolbox;
    id <WBFPlayerLayerMetalTextureAdaptor> _textureAdaptorYUV420P;
}

+ (id)globalDefaultLibrary;
+ (id)globalDefaultDevice;
@property(retain, nonatomic) id <WBFPlayerLayerMetalTextureAdaptor> textureAdaptorYUV420P; // @synthesize textureAdaptorYUV420P=_textureAdaptorYUV420P;
@property(retain, nonatomic) id <WBFPlayerLayerMetalTextureAdaptor> textureAdaptorVideoToolbox; // @synthesize textureAdaptorVideoToolbox=_textureAdaptorVideoToolbox;
@property(retain, nonatomic) id <MTLSamplerState> sampler; // @synthesize sampler=_sampler;
@property(retain, nonatomic) id <MTLBuffer> colorConversion; // @synthesize colorConversion=_colorConversion;
@property(retain, nonatomic) id <MTLBuffer> vertexBuffer; // @synthesize vertexBuffer=_vertexBuffer;
@property(retain, nonatomic) id <MTLCommandQueue> commandQueue; // @synthesize commandQueue=_commandQueue;
@property(retain, nonatomic) id <MTLRenderPipelineState> pipelineState; // @synthesize pipelineState=_pipelineState;
@property(retain, nonatomic) id <MTLLibrary> library; // @synthesize library=_library;
@property(retain, nonatomic) id <MTLDevice> device; // @synthesize device=_device;
- (void).cxx_destruct;
- (long long)drawOverlay:(struct SDL_VoutOverlay *)arg1 drawable:(id)arg2 viewPort:(CDStruct_8727d297)arg3 waitUntilCompleted:(_Bool)arg4 completeHandler:(CDUnknownBlockType)arg5;
- (id)_textureAdaptorWithFormat:(unsigned int)arg1;
- (_Bool)_setupMetal;
- (id)initWithDevice:(id)arg1;

@end

