//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "XMMANativeMethodParamProtocol-Protocol.h"

@class NSString;

@interface XACanvasToTempFilePathParam : NSObject <XMMANativeMethodParamProtocol>
{
    NSString *_canvasId;
    double _x;
    double _y;
    double _width;
    double _height;
    double _destWidth;
    double _destHeight;
    NSString *_fileType;
    double _quality;
    NSString *_cb;
    NSString *_fillType;
    NSString *_slaveId;
}

@property(copy, nonatomic) NSString *slaveId; // @synthesize slaveId=_slaveId;
@property(copy, nonatomic) NSString *fillType; // @synthesize fillType=_fillType;
@property(copy, nonatomic) NSString *cb; // @synthesize cb=_cb;
@property(nonatomic) double quality; // @synthesize quality=_quality;
@property(copy, nonatomic) NSString *fileType; // @synthesize fileType=_fileType;
@property(nonatomic) double destHeight; // @synthesize destHeight=_destHeight;
@property(nonatomic) double destWidth; // @synthesize destWidth=_destWidth;
@property(nonatomic) double height; // @synthesize height=_height;
@property(nonatomic) double width; // @synthesize width=_width;
@property(nonatomic) double y; // @synthesize y=_y;
@property(nonatomic) double x; // @synthesize x=_x;
@property(copy, nonatomic) NSString *canvasId; // @synthesize canvasId=_canvasId;
- (void).cxx_destruct;
- (_Bool)isValidate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

