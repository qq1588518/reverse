//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CSMovieGLRenderer_YUV, CSVideoFrameYUV, EAGLContext;

@interface VideoPlayer : UIView
{
    EAGLContext *_context;
    unsigned int _framebuffer;
    unsigned int _renderbuffer;
    int _backingWidth;
    int _backingHeight;
    unsigned int _program;
    unsigned int _clearProgram;
    int _uniformMatrix;
    float _vertices[8];
    int _width;
    int _height;
    _Bool _process_video;
    CSVideoFrameYUV *_vframe;
    CSMovieGLRenderer_YUV *_renderer;
    _Bool _isDisPlayEnable;
    unsigned char savePicBuffer[1843200];
    _Bool _isNeedSavePic;
    int _savePicSize;
    _Bool _isSavePic;
}

+ (Class)layerClass;
- (void).cxx_destruct;
- (void)cleanSavePic;
- (void)setSavePicFlags:(_Bool)arg1;
- (void)setDisPlayViewState:(_Bool)arg1;
- (_Bool)getDisPlayViewState;
- (_Bool)getProcessVide;
- (void)processVideo:(_Bool)arg1;
- (_Bool)putVideoData:(char *)arg1 size:(int)arg2;
- (int)cleanPlayer;
- (void)stopPlay;
- (void)startPlayWithWidth:(int)arg1 height:(int)arg2;
- (void)updateVertices;
- (_Bool)loadShaders;
- (_Bool)loadClearShaders;
- (void)setContentMode:(long long)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)destoryRenderAndFrameBuffer;
- (_Bool)createRenderAndFrameBuffer;
- (id)init;
- (void)dealloc;

@end

