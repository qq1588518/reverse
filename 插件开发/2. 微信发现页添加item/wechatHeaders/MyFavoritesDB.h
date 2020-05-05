//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WCTDatabase, WCTTable;

@interface MyFavoritesDB : NSObject
{
    WCTDatabase *m_db;
    WCTTable *m_tableFavItem;
    WCTTable *m_tableCdnUpload;
    WCTTable *m_tableFileRetainCount;
    WCTTable *m_tableSearch;
    WCTTable *m_tableTag;
}

@property(retain, nonatomic) WCTTable *m_tableTag; // @synthesize m_tableTag;
@property(retain, nonatomic) WCTTable *m_tableSearch; // @synthesize m_tableSearch;
@property(retain, nonatomic) WCTTable *m_tableFileRetainCount; // @synthesize m_tableFileRetainCount;
@property(retain, nonatomic) WCTTable *m_tableCdnUpload; // @synthesize m_tableCdnUpload;
@property(retain, nonatomic) WCTTable *m_tableFavItem; // @synthesize m_tableFavItem;
@property(retain, nonatomic) WCTDatabase *m_db; // @synthesize m_db;
- (void).cxx_destruct;
- (id)internalCreateTable:(id)arg1 tableClass:(Class)arg2;
- (_Bool)createTables;
- (void)closeDBBeforeInit;
- (void)clearTables;
- (void)closeDB;
- (_Bool)runTransaction:(CDUnknownBlockType)arg1;
- (_Bool)initDB;
- (void)reloadDataBase;
- (void)dealloc;
- (_Bool)deleteFavoritesItemByLocalItemId:(unsigned int)arg1;
- (_Bool)deleteFavoritesItemById:(unsigned int)arg1;
- (_Bool)updateItemLocalStatus:(int)arg1 ByLocalId:(unsigned int)arg2;
- (_Bool)updateItemUpdateTime:(unsigned int)arg1 ByLocalId:(unsigned int)arg2;
- (_Bool)updateUpdateSeq:(unsigned int)arg1 ByFavId:(unsigned int)arg2;
- (_Bool)updateItemInFavItemDBForFavObject:(id)arg1 ByFavId:(unsigned int)arg2;
- (_Bool)updateItemInFavItemDB:(id)arg1 ByLocalItemId:(unsigned int)arg2;
- (void)fillFavItemUpdatePropertiesForFavObject:(SyntaxList_7f15fe8c *)arg1;
- (void)fillFavItemUpdateProperties:(SyntaxList_7f15fe8c *)arg1;
- (unsigned int)getFavIndexByUpdateTime:(unsigned int)arg1;
- (id)getNeedCacheWebItems;
- (id)getNextPageFavoritesCapacityItemListBySize:(unsigned int)arg1;
- (id)getFirstPageFavoritesCapacityItemList;
- (id)getNeedBatchGetFavoritesItemListByType:(int)arg1 andMinUpdateTime:(unsigned int)arg2;
- (id)getNextPageFavoritesItemListByType:(int)arg1 andCurMinUpdateTime:(unsigned int)arg2;
- (id)getFirstPageFavoritesItemListByType:(int)arg1;
- (id)getFavoritesItemListFrom:(unsigned int)arg1 Limit:(int)arg2;
- (id)getDeleteItemList;
- (id)getAllFavoritesItemList;
- (id)getDownloadFailedItemList;
- (id)getBeforeAsyncUploadingItemList;
- (id)getAsyncUploadFailedItemList;
- (id)getUploadFailedItemList;
- (id)getDownloadingItemList;
- (id)getAsyncUploadingItemList;
- (id)getUploadingItemList;
- (id)checkBeforeAddItemByFavId:(unsigned int)arg1 andLocalId:(unsigned int)arg2;
- (id)getLastFavoritesItem;
- (id)getFavoritesItemBySourceId:(id)arg1;
- (id)getFavoritesItemByLocalId:(unsigned int)arg1;
- (id)getFavoritesItemById:(unsigned int)arg1;
- (_Bool)insertNewRowInFavoritesItemTable:(id)arg1;
- (_Bool)deleteCdnInfoByFavoritesItemLocalId:(unsigned int)arg1;
- (_Bool)updateCdnInfo:(id)arg1 byItemLocalDataId:(id)arg2 andType:(int)arg3;
- (id)getNextAsyncUploadCdnInfoByLocalItemId:(unsigned int)arg1;
- (id)getNextUploadCdnInfoByLocalItemId:(unsigned int)arg1;
- (id)getUploadCdnInfoByLocalItemDataId:(id)arg1 andType:(int)arg2;
- (_Bool)insertNewRowInCdnInfoTable:(id)arg1;
- (_Bool)deleteItemFromFavoritesFileRetainCountTableByMd5:(id)arg1 andLocalItemId:(unsigned int)arg2;
- (_Bool)insertNewRowInFileRetainCountTable:(id)arg1 ItemLocalId:(unsigned int)arg2;
- (_Bool)isMd5RetainCountZero:(id)arg1;
- (_Bool)isItemExist:(id)arg1 andLocalItemId:(unsigned int)arg2;
- (id)getSearchItemListByType:(int)arg1 SearchContent:(id)arg2;
- (_Bool)deleteSearchInfoByLocalFavId:(unsigned int)arg1;
- (_Bool)insertOrUpdateFavSearchItem:(id)arg1;
- (id)getTagItemListByTags:(id)arg1;
- (id)getTagsByLocalFavId:(unsigned int)arg1;
- (id)getDistinctTags;
- (_Bool)deleteTagsByLocalFavId:(unsigned int)arg1;
- (_Bool)insertItemTag:(id)arg1;

@end

