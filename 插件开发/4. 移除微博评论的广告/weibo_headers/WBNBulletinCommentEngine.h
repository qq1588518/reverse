//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBFCLBaseEngine.h"

@class NSString;

@interface WBNBulletinCommentEngine : WBFCLBaseEngine
{
    _Bool _lacking;
    _Bool _hasRemoveGeneralOccupied;
    int _isShowBulletin;
    int _refreshType;
    long long _shieldStyle;
    NSString *_anchorID;
    NSString *_commentExt;
}

@property(nonatomic) _Bool hasRemoveGeneralOccupied; // @synthesize hasRemoveGeneralOccupied=_hasRemoveGeneralOccupied;
@property(nonatomic) _Bool lacking; // @synthesize lacking=_lacking;
@property(nonatomic) int refreshType; // @synthesize refreshType=_refreshType;
@property(nonatomic) int isShowBulletin; // @synthesize isShowBulletin=_isShowBulletin;
@property(copy, nonatomic) NSString *commentExt; // @synthesize commentExt=_commentExt;
@property(copy, nonatomic) NSString *anchorID; // @synthesize anchorID=_anchorID;
@property(nonatomic) long long shieldStyle; // @synthesize shieldStyle=_shieldStyle;
- (void).cxx_destruct;
- (long long)_seekOccupiedItemWithType:(long long)arg1 inItems:(id)arg2;
- (void)_markExpandStatus;
- (id)_getSortParamInItems:(id)arg1;
- (long long)_seekInsertIndexWithOccupiedItem:(id)arg1 inItems:(id)arg2;
- (id)parseNoCommentItemWithDict:(id)arg1;
- (id)_parseHeaderSortItemWithDict:(id)arg1;
- (id)_parseOccupiedItemWithDict:(id)arg1 withItemsCount:(unsigned long long)arg2;
- (unsigned long long)parseDomain;
- (void)fetchDataWithParams:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)insertDataWithParams:(id)arg1 withOccupiedItem:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)loadMoreDataWithParams:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)reloadDataWithParams:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)cachedFileName;
- (id)init;

@end

