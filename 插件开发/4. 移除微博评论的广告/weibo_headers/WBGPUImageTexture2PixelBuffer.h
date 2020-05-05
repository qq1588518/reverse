//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBGPUImageFilterContext.h"

@class WBGPUImageTexture2PixelBufferHandle;
@protocol WBGPUImageEffectDelegate;

@interface WBGPUImageTexture2PixelBuffer : WBGPUImageFilterContext
{
    WBGPUImageTexture2PixelBufferHandle *_handle;
}

- (void).cxx_destruct;
- (void)destroy;
@property(nonatomic) __weak id <WBGPUImageEffectDelegate> delegate;
- (void)renderTexture:(unsigned int)arg1 toPixelBuffer:(struct __CVBuffer *)arg2;
- (struct __CVBuffer *)renderTextureToPixelBuffer:(unsigned int)arg1 inputSize:(struct CGSize)arg2;
- (void)dealloc;
- (id)initWithContext:(id)arg1;

@end

