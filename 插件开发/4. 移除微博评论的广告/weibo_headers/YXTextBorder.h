//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class UIColor, YXTextShadow;

@interface YXTextBorder : NSObject <NSCoding, NSCopying>
{
    int _lineJoin;
    long long _lineStyle;
    double _strokeWidth;
    UIColor *_strokeColor;
    double _cornerRadius;
    YXTextShadow *_shadow;
    UIColor *_fillColor;
    struct UIEdgeInsets _insets;
}

+ (id)borderWithFillColor:(id)arg1 cornerRadius:(double)arg2;
+ (id)borderWithLineStyle:(long long)arg1 lineWidth:(double)arg2 strokeColor:(id)arg3;
@property(retain, nonatomic) UIColor *fillColor; // @synthesize fillColor=_fillColor;
@property(retain, nonatomic) YXTextShadow *shadow; // @synthesize shadow=_shadow;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) struct UIEdgeInsets insets; // @synthesize insets=_insets;
@property(nonatomic) int lineJoin; // @synthesize lineJoin=_lineJoin;
@property(retain, nonatomic) UIColor *strokeColor; // @synthesize strokeColor=_strokeColor;
@property(nonatomic) double strokeWidth; // @synthesize strokeWidth=_strokeWidth;
@property(nonatomic) long long lineStyle; // @synthesize lineStyle=_lineStyle;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

