//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, WBDetailedBulletinCommentConfig, WBMessageCenterNotificationSettingTipConfig, WBMsgBoxCommonCommentConfig, WBStatusRollingUnionAreaConfig, WBStatusTopInformationAreaConfig, WBStatusUnionAreaConfig, WBTimelineActionButtonsConfig, WBTimelineArticleConfig, WBTimelineBodyConfig, WBTimelineCommentsAreaConfig, WBTimelineCommonConfig, WBTimelineFwdCmtLikeAreaConfig, WBTimelineHeaderAreaConfig, WBTimelineHintBoardConfig, WBTimelineImageConfig, WBTimelineProductAreaConfig, WBTimelineTagAreaConfig;

@interface WBTimelinePreset : NSObject
{
    NSMutableDictionary *_presetParaDict;
    WBTimelineCommonConfig *_commonConfig;
    WBStatusTopInformationAreaConfig *_topInforAreaConfig;
    WBTimelineHeaderAreaConfig *_headerConfig;
    WBTimelineImageConfig *_imageConfig;
    WBStatusUnionAreaConfig *_unionAreaConfig;
    WBStatusRollingUnionAreaConfig *_rollingUnionAreaConfig;
    WBTimelineBodyConfig *_bodyConfig;
    WBTimelineActionButtonsConfig *_actionButtonsConfig;
    WBTimelineCommentsAreaConfig *_commentsAreaConfig;
    WBTimelineProductAreaConfig *_productAreaConfig;
    WBTimelineArticleConfig *_articleConfig;
    WBTimelineHintBoardConfig *_hintBoardConfig;
    WBMessageCenterNotificationSettingTipConfig *_notificationSettingTipConfig;
    WBTimelineTagAreaConfig *_tagAreaConfig;
    WBTimelineFwdCmtLikeAreaConfig *_fwdCmtLikeAreaConfig;
    WBMsgBoxCommonCommentConfig *_msgBoxCommonCmtConfig;
    WBDetailedBulletinCommentConfig *_detailedBulletinCommentConfig;
}

+ (_Bool)isUserLargeAvatarImage:(double)arg1;
+ (double)floatForKey:(id)arg1;
+ (id)sharedInstance;
@property(readonly, nonatomic) WBDetailedBulletinCommentConfig *detailedBulletinCommentConfig; // @synthesize detailedBulletinCommentConfig=_detailedBulletinCommentConfig;
@property(readonly, nonatomic) WBMsgBoxCommonCommentConfig *msgBoxCommonCmtConfig; // @synthesize msgBoxCommonCmtConfig=_msgBoxCommonCmtConfig;
@property(readonly, nonatomic) WBTimelineFwdCmtLikeAreaConfig *fwdCmtLikeAreaConfig; // @synthesize fwdCmtLikeAreaConfig=_fwdCmtLikeAreaConfig;
@property(readonly, nonatomic) WBTimelineTagAreaConfig *tagAreaConfig; // @synthesize tagAreaConfig=_tagAreaConfig;
@property(readonly, nonatomic) WBMessageCenterNotificationSettingTipConfig *notificationSettingTipConfig; // @synthesize notificationSettingTipConfig=_notificationSettingTipConfig;
@property(readonly, nonatomic) WBTimelineHintBoardConfig *hintBoardConfig; // @synthesize hintBoardConfig=_hintBoardConfig;
@property(readonly, nonatomic) WBTimelineArticleConfig *articleConfig; // @synthesize articleConfig=_articleConfig;
@property(readonly, nonatomic) WBTimelineProductAreaConfig *productAreaConfig; // @synthesize productAreaConfig=_productAreaConfig;
@property(readonly, nonatomic) WBTimelineCommentsAreaConfig *commentsAreaConfig; // @synthesize commentsAreaConfig=_commentsAreaConfig;
@property(readonly, nonatomic) WBTimelineActionButtonsConfig *actionButtonsConfig; // @synthesize actionButtonsConfig=_actionButtonsConfig;
@property(readonly, nonatomic) WBTimelineBodyConfig *bodyConfig; // @synthesize bodyConfig=_bodyConfig;
@property(readonly, nonatomic) WBStatusRollingUnionAreaConfig *rollingUnionAreaConfig; // @synthesize rollingUnionAreaConfig=_rollingUnionAreaConfig;
@property(readonly, nonatomic) WBStatusUnionAreaConfig *unionAreaConfig; // @synthesize unionAreaConfig=_unionAreaConfig;
@property(readonly, nonatomic) WBTimelineImageConfig *imageConfig; // @synthesize imageConfig=_imageConfig;
@property(readonly, nonatomic) WBTimelineHeaderAreaConfig *headerConfig; // @synthesize headerConfig=_headerConfig;
@property(readonly, nonatomic) WBStatusTopInformationAreaConfig *topInforAreaConfig; // @synthesize topInforAreaConfig=_topInforAreaConfig;
@property(readonly, nonatomic) WBTimelineCommonConfig *commonConfig; // @synthesize commonConfig=_commonConfig;
@property(retain, nonatomic) NSMutableDictionary *presetParaDict; // @synthesize presetParaDict=_presetParaDict;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setGridImageScale:(double)arg1;
- (void)viewWillTransition:(id)arg1;
- (id)init;

@end

