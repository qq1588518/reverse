//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XMBase/XMModel.h>

@class NSString;

@interface XMHotSearchTabModel : XMModel
{
    NSString *_categoryName;
    NSString *_categoryId;
    NSString *_hotword;
    NSString *_metadata;
    NSString *_srcCategoryId;
}

@property(copy, nonatomic) NSString *srcCategoryId; // @synthesize srcCategoryId=_srcCategoryId;
@property(copy, nonatomic) NSString *metadata; // @synthesize metadata=_metadata;
@property(copy, nonatomic) NSString *hotword; // @synthesize hotword=_hotword;
@property(copy, nonatomic) NSString *categoryId; // @synthesize categoryId=_categoryId;
@property(copy, nonatomic) NSString *categoryName; // @synthesize categoryName=_categoryName;
- (void).cxx_destruct;
- (_Bool)modelCustomTransformFromDictionary:(id)arg1;

@end

