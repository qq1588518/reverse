//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSString;

@protocol ZKImage
@property(readonly, nonatomic) double scale;
@property(readonly, nonatomic) double height;
@property(readonly, nonatomic) double width;
- (int)copyBitmap:(int)arg1 data:(void *)arg2 size:(int)arg3;
- (void)open:(NSString *)arg1 imageId:(long long)arg2;
@end

