//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ZKCGStyle.h"

#import "ZKCGPattern-Protocol.h"

@class NSString, ZKImage;

@interface ZKCGPattern : ZKCGStyle <ZKCGPattern>
{
    ZKImage *_image;
    NSString *_type;
}

@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) ZKImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (id)initWithPattern:(id)arg1 type:(id)arg2;

@end

