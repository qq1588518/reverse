//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBModelObject.h"

@class NSString, WBImageEditorCache;

@interface WBProduct : WBModelObject
{
    _Bool _isAdded;
    _Bool _isDaogou;
    NSString *_pId;
    NSString *_url;
    NSString *_img;
    NSString *_name;
    NSString *_desc;
    NSString *_price;
    NSString *_number;
    NSString *_pageId;
    NSString *_objectID;
    NSString *_type;
    NSString *_originalImageURL;
}

+ (_Bool)isValidForDictionary:(id)arg1;
@property(nonatomic) _Bool isDaogou; // @synthesize isDaogou=_isDaogou;
@property(retain, nonatomic) NSString *originalImageURL; // @synthesize originalImageURL=_originalImageURL;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(nonatomic) _Bool isAdded; // @synthesize isAdded=_isAdded;
@property(retain, nonatomic) NSString *objectID; // @synthesize objectID=_objectID;
@property(retain, nonatomic) NSString *pageId; // @synthesize pageId=_pageId;
@property(retain, nonatomic) NSString *number; // @synthesize number=_number;
@property(retain, nonatomic) NSString *price; // @synthesize price=_price;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *img; // @synthesize img=_img;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *pId; // @synthesize pId=_pId;
- (void).cxx_destruct;
- (id)primaryKey;
- (id)dictionaryWithValues;
- (_Bool)updateWithJSONDictionary:(id)arg1;
- (_Bool)updateWithDictionary:(id)arg1;
@property(retain, nonatomic) WBImageEditorCache *image; // @dynamic image;

@end

