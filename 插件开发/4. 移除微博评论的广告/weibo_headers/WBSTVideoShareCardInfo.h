//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBModelObject.h"

@class NSString;

@interface WBSTVideoShareCardInfo : WBModelObject
{
    NSString *_pageID;
    NSString *_pageTitle;
    NSString *_pageDescription;
    NSString *_pageImageURL;
    NSString *_shortUrl;
}

@property(copy, nonatomic) NSString *shortUrl; // @synthesize shortUrl=_shortUrl;
@property(copy, nonatomic) NSString *pageImageURL; // @synthesize pageImageURL=_pageImageURL;
@property(copy, nonatomic) NSString *pageDescription; // @synthesize pageDescription=_pageDescription;
@property(copy, nonatomic) NSString *pageTitle; // @synthesize pageTitle=_pageTitle;
@property(copy, nonatomic) NSString *pageID; // @synthesize pageID=_pageID;
- (void).cxx_destruct;
- (_Bool)updateWithDictionary:(id)arg1;

@end

