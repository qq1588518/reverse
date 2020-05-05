//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FavoritesModel.h"

@class FavLocationItem, FavProductItem, FavTVItem, FavURLItem, FavWeAppItem, NSArray, NSDate, NSMutableArray, NSString, WCFinderShareToMomentsItem;

@interface FavoritesItem : FavoritesModel
{
    NSMutableArray *_dataList;
    NSMutableArray *_tagList;
    _Bool _uploadFailButtomShow;
    _Bool _uploadFailButtomClicked;
    _Bool _isFromFavToChat;
    unsigned int _favId;
    unsigned int _localId;
    int _localStatus;
    int _type;
    int _sourceType;
    unsigned int _updateTime;
    unsigned int _srcCreateTime;
    unsigned int _version;
    unsigned int _updateSeq;
    unsigned int _localUpdateSeq;
    unsigned int _editTime;
    unsigned int _ctrlFlag;
    unsigned int _totalDataSize;
    int _retryTimes;
    unsigned int _webCacheStatus;
    unsigned int _m_preMsgIndex;
    unsigned int _m_uiFromScene;
    NSString *_sourceId;
    NSString *_deviceid;
    NSString *_title;
    NSString *_desc;
    NSString *_link;
    NSString *_fromUsr;
    NSString *_realChatName;
    NSString *_toUsr;
    NSString *_editUsr;
    long long _n64MsgID;
    NSString *_eventId;
    NSString *_appId;
    NSString *_brandId;
    FavLocationItem *_locItem;
    FavURLItem *_urlItem;
    FavProductItem *_productItem;
    FavTVItem *_tvItem;
    FavWeAppItem *_weAppItem;
    NSDate *_startUploadTime;
    double _cellHeight;
    NSString *_favCheckId;
    NSString *_searchText;
    NSString *_m_nsFavUsername;
    WCFinderShareToMomentsItem *_finderShareItem;
}

+ (id)xmlOfStreamVideo:(id)arg1;
+ (void)parseStreamVideoNode:(struct XmlReaderNode_t *)arg1 dataField:(id)arg2;
+ (id)FavoritesDataFieldToXML:(id)arg1 item:(id)arg2;
+ (id)FavritesItemToXML:(id)arg1;
+ (id)replacePathPrefix:(id)arg1;
+ (id)parseTagXml:(struct XmlReaderNode_t *)arg1;
+ (id)parseDataNodeFromXml:(struct XmlReaderNode_t *)arg1 deep:(int)arg2;
+ (_Bool)ParseItemXML:(id)arg1 ToItem:(id)arg2;
+ (id)xmlAttributePropertylist;
+ (id)modelPropertyBlacklist;
+ (id)xmlTagPreProcesslist;
+ (id)modelContainerPropertyMapping;
+ (id)modelCustomPropertyMapper;
@property(retain, nonatomic) WCFinderShareToMomentsItem *finderShareItem; // @synthesize finderShareItem=_finderShareItem;
@property(nonatomic) _Bool isFromFavToChat; // @synthesize isFromFavToChat=_isFromFavToChat;
@property(retain, nonatomic) NSString *m_nsFavUsername; // @synthesize m_nsFavUsername=_m_nsFavUsername;
@property(nonatomic) unsigned int m_uiFromScene; // @synthesize m_uiFromScene=_m_uiFromScene;
@property(nonatomic) unsigned int m_preMsgIndex; // @synthesize m_preMsgIndex=_m_preMsgIndex;
@property(retain, nonatomic) NSString *searchText; // @synthesize searchText=_searchText;
@property(retain, nonatomic) NSString *favCheckId; // @synthesize favCheckId=_favCheckId;
@property(nonatomic) unsigned int webCacheStatus; // @synthesize webCacheStatus=_webCacheStatus;
@property(nonatomic) _Bool uploadFailButtomClicked; // @synthesize uploadFailButtomClicked=_uploadFailButtomClicked;
@property(nonatomic) _Bool uploadFailButtomShow; // @synthesize uploadFailButtomShow=_uploadFailButtomShow;
@property(nonatomic) double cellHeight; // @synthesize cellHeight=_cellHeight;
@property(retain, nonatomic) NSDate *startUploadTime; // @synthesize startUploadTime=_startUploadTime;
@property(nonatomic) int retryTimes; // @synthesize retryTimes=_retryTimes;
@property(retain, nonatomic) NSArray *tagList; // @synthesize tagList=_tagList;
@property(retain, nonatomic) FavWeAppItem *weAppItem; // @synthesize weAppItem=_weAppItem;
@property(retain, nonatomic) FavTVItem *tvItem; // @synthesize tvItem=_tvItem;
@property(retain, nonatomic) FavProductItem *productItem; // @synthesize productItem=_productItem;
@property(retain, nonatomic) FavURLItem *urlItem; // @synthesize urlItem=_urlItem;
@property(retain, nonatomic) FavLocationItem *locItem; // @synthesize locItem=_locItem;
@property(nonatomic) unsigned int totalDataSize; // @synthesize totalDataSize=_totalDataSize;
@property(retain, nonatomic) NSString *brandId; // @synthesize brandId=_brandId;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) NSString *eventId; // @synthesize eventId=_eventId;
@property(nonatomic) long long n64MsgID; // @synthesize n64MsgID=_n64MsgID;
@property(retain, nonatomic) NSString *editUsr; // @synthesize editUsr=_editUsr;
@property(retain, nonatomic) NSString *toUsr; // @synthesize toUsr=_toUsr;
@property(retain, nonatomic) NSString *realChatName; // @synthesize realChatName=_realChatName;
@property(retain, nonatomic) NSString *fromUsr; // @synthesize fromUsr=_fromUsr;
@property(nonatomic) unsigned int ctrlFlag; // @synthesize ctrlFlag=_ctrlFlag;
@property(retain, nonatomic) NSString *link; // @synthesize link=_link;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) unsigned int editTime; // @synthesize editTime=_editTime;
@property(nonatomic) unsigned int localUpdateSeq; // @synthesize localUpdateSeq=_localUpdateSeq;
@property(nonatomic) unsigned int updateSeq; // @synthesize updateSeq=_updateSeq;
@property(retain, nonatomic) NSString *deviceid; // @synthesize deviceid=_deviceid;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
@property(nonatomic) unsigned int srcCreateTime; // @synthesize srcCreateTime=_srcCreateTime;
@property(nonatomic) unsigned int updateTime; // @synthesize updateTime=_updateTime;
@property(nonatomic) int sourceType; // @synthesize sourceType=_sourceType;
@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) int localStatus; // @synthesize localStatus=_localStatus;
@property(retain, nonatomic) NSString *sourceId; // @synthesize sourceId=_sourceId;
@property(nonatomic) unsigned int localId; // @synthesize localId=_localId;
@property(nonatomic) unsigned int favId; // @synthesize favId=_favId;
@property(retain, nonatomic) NSArray *dataList; // @synthesize dataList=_dataList;
- (void).cxx_destruct;
- (_Bool)isEqualToItem:(id)arg1;
- (id)getDataByLocalDataId:(id)arg1 InDataList:(id)arg2;
- (id)getDataByLocalDataId:(id)arg1;
- (_Bool)enumerateDataIn:(id)arg1 UsingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateDataUsingBlock:(CDUnknownBlockType)arg1;
- (_Bool)chectNeedDownloadInDataList:(id)arg1;
- (_Bool)needDownLoad;
- (_Bool)isUploadFail;
- (_Bool)isUploading;
- (_Bool)needUpload;
- (_Bool)canBeForward;
- (_Bool)checkNeedDownloadDataBeforeForwardInDataList:(id)arg1;
- (int)checkIllegalTypeBeforeForwardInDataList:(id)arg1;
- (id)summaryInfo;
- (unsigned int)sourceTime;
- (id)sourceUserName;
- (id)canBeForwardWithMsg;
- (id)getFirstMediaData;
- (_Bool)isFromMessage;
- (_Bool)isRecordItem;
- (_Bool)hasCDNData;
- (unsigned int)calculateDataSizeInDataList:(id)arg1;
- (unsigned int)itemServerSize;
- (unsigned int)itemTotalSize;
- (_Bool)canAutoDownload;
- (id)generateSearchString;
- (_Bool)dataListHasBeenCopyedToTarget:(id)arg1;
- (_Bool)dataHasBeenCopyedToTarget;
- (void)addData:(id)arg1 Index:(int)arg2;
- (id)initWithAddFavItem:(id)arg1;
- (id)init;

@end

