//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface XMGrouponInfoItem : NSObject
{
    _Bool _isAttending;
    NSString *_grouponAlbumDisplayPrice;
    double _grouponAlbumPrice;
    long long _availableQuantity;
    NSString *_grouponPageUrl;
}

@property(copy, nonatomic) NSString *grouponPageUrl; // @synthesize grouponPageUrl=_grouponPageUrl;
@property(nonatomic) long long availableQuantity; // @synthesize availableQuantity=_availableQuantity;
@property(nonatomic) _Bool isAttending; // @synthesize isAttending=_isAttending;
@property(nonatomic) double grouponAlbumPrice; // @synthesize grouponAlbumPrice=_grouponAlbumPrice;
@property(copy, nonatomic) NSString *grouponAlbumDisplayPrice; // @synthesize grouponAlbumDisplayPrice=_grouponAlbumDisplayPrice;
- (void).cxx_destruct;

@end

