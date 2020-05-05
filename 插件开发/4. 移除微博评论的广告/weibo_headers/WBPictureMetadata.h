//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBModelObject.h"

@class NSString;

@interface WBPictureMetadata : WBModelObject
{
    NSString *_url;
    unsigned long long _width;
    unsigned long long _height;
    NSString *_type;
    long long _cutType;
}

+ (id)flagImageUrl:(id)arg1 imageSize:(struct CGSize)arg2 inDetail:(_Bool)arg3;
+ (id)pictureDataWithInfo:(id)arg1;
@property(nonatomic) long long cutType; // @synthesize cutType=_cutType;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(nonatomic) unsigned long long height; // @synthesize height=_height;
@property(nonatomic) unsigned long long width; // @synthesize width=_width;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (id)flagImageUrlInDetail:(_Bool)arg1;
- (id)flagImageUrl;
- (_Bool)isLongPicture;
- (id)infoDict;

@end

