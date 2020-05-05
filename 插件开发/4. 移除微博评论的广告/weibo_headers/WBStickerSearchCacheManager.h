//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface WBStickerSearchCacheManager : NSObject
{
    NSMutableArray *_list;
    NSMutableArray *_tagList;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableArray *tagList; // @synthesize tagList=_tagList;
@property(retain, nonatomic) NSMutableArray *list; // @synthesize list=_list;
- (void).cxx_destruct;
- (id)trim:(id)arg1;
- (void)clearHotTag;
- (void)saveRecommends:(id)arg1;
- (void)saveHotTagModels:(id)arg1;
- (id)recommendInfo;
- (id)hotTagList;
- (void)clearCache;
- (id)cacheList;
- (void)removeSearchKey:(id)arg1;
- (void)addSearchKey:(id)arg1;
- (void)loadHotTagInfo;
- (void)loadHistoryInfo;
- (id)init;

@end

