//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MMImageUtility : NSObject
{
}

+ (id)getGroupAvataView:(id)arg1;
+ (struct CGAffineTransform)affineTransformForCurrentOrientation:(id)arg1;
+ (id)fixOrientation:(id)arg1;
+ (id)cutCenterImage:(id)arg1 targetSize:(struct CGSize)arg2 scale:(double)arg3;
+ (id)scaleImage:(id)arg1 targetSize:(struct CGSize)arg2;
+ (id)computePathWithSize:(struct CGSize)arg1 cornerPadding:(double)arg2 apical:(double)arg3 scale:(double)arg4 corpHalf:(_Bool)arg5 outgoing:(_Bool)arg6;
+ (id)clipImage:(id)arg1 targetSize:(struct CGSize)arg2 outgoing:(_Bool)arg3 corpHalf:(_Bool)arg4;
+ (id)cropImage:(id)arg1 targetSize:(struct CGSize)arg2 outgoing:(_Bool)arg3 needScale:(_Bool)arg4 corpHalf:(_Bool)arg5;
+ (id)cropImage:(id)arg1 targetSize:(struct CGSize)arg2 outgoing:(_Bool)arg3 needScale:(_Bool)arg4;
+ (id)cropImage:(id)arg1 targetSize:(struct CGSize)arg2 outgoing:(_Bool)arg3;

@end

