//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IDButton, IDCommunicationSystem, IDHmiAction, IDInstrumentCluster, IDModel, IDMultimediaInfo, IDNavigationSystem, IDNotificationProvider, IDPreviewModel, IDStatusBar, IDView, NSSet;

@protocol IDHmiProvider <NSObject>
- (_Bool)supportsHmiType:(unsigned long long)arg1;
- (IDStatusBar *)hmiStatusBar;
- (IDMultimediaInfo *)multimediaInfo;
- (NSSet *)allEntryButtons;
- (IDButton *)entryButtonForId:(long long)arg1;
- (NSSet *)allNotificationProviders;
- (IDNotificationProvider *)notificationProviderForId:(long long)arg1;
- (NSSet *)allViews;
- (IDView *)viewForId:(long long)arg1;
- (IDHmiAction *)hmiActionForId:(long long)arg1;
- (NSSet *)allPreviewModels;
- (IDPreviewModel *)previewModelForId:(long long)arg1;
- (NSSet *)allModels;
- (IDModel *)modelForId:(long long)arg1;

@optional
- (IDNavigationSystem *)navigationSystem;
- (IDCommunicationSystem *)communicationSystem;
- (IDInstrumentCluster *)instrumentCluster;
@end

