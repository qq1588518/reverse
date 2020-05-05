//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@interface WBGPUImageViewHandler : UIView
{
    int inputRotation;
    unsigned int inputFramebufferForDisplay;
    unsigned int displayRenderbuffer;
    unsigned int displayFramebuffer;
    struct WBGLProgram *displayProgram;
    int displayPositionAttribute;
    int displayTextureCoordinateAttribute;
    int displayInputTextureUniform;
    struct CGSize inputImageSize;
    float imageVertices[8];
    float backgroundColorRed;
    float backgroundColorGreen;
    float backgroundColorBlue;
    float backgroundColorAlpha;
    struct CGSize boundsSizeAtFrameBufferEpoch;
    struct {
        unsigned int needsSize:1;
    } _flags;
    _Bool _initWithProgramSuccess;
    _Bool _initWithFrameBufferSuccess;
    unsigned long long aspectRatio;
    unsigned long long _fillMode;
    struct CGSize _sizeInPixels;
}

+ (const float *)textureCoordinatesForRotation:(int)arg1;
+ (Class)layerClass;
@property(nonatomic) unsigned long long fillMode; // @synthesize fillMode=_fillMode;
@property(nonatomic) unsigned long long aspectRatio; // @synthesize aspectRatio;
@property(readonly, nonatomic) struct CGSize sizeInPixels; // @synthesize sizeInPixels=_sizeInPixels;
- (_Bool)wantsMonochromeInput;
- (_Bool)shouldIgnoreUpdatesToThisTarget;
- (void)endProcessing;
- (struct CGSize)maximumOutputSize;
- (void)setInputRotation:(int)arg1;
- (void)destroy;
- (void)setInputSize:(struct CGSize)arg1;
- (void)setInputTexture:(unsigned int)arg1;
- (void)newFrameReadyAtTime:(CDStruct_1b6d18a9)arg1;
- (void)setBackgroundColorRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4;
- (void)recalculateViewGeometry;
- (void)presentFramebuffer;
- (void)setDisplayFramebuffer;
- (void)destroyDisplayFramebuffer;
- (_Bool)createDisplayFramebuffer;
- (void)dealloc;
- (void)layoutSubviews;
- (void)initialProgram;
- (id)initWithFrame:(struct CGRect)arg1;

@end

