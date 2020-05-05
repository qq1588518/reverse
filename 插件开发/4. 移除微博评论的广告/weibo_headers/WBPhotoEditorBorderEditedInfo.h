//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WBPhotoEditorBorderEditedInfo : NSObject
{
    double _scale;
    struct CGPoint _center;
    struct CGSize _containerSize;
    struct CGSize _viewSize;
}

@property(nonatomic) struct CGSize viewSize; // @synthesize viewSize=_viewSize;
@property(nonatomic) struct CGSize containerSize; // @synthesize containerSize=_containerSize;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(nonatomic) struct CGPoint center; // @synthesize center=_center;
@property(readonly, nonatomic) NSString *reflectString;
- (id)initWithString:(id)arg1;
- (id)initWithCenter:(struct CGPoint)arg1 scale:(double)arg2 containerSize:(struct CGSize)arg3 viewSize:(struct CGSize)arg4;

@end

