//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "PBMessageObserverDelegate-Protocol.h"

@class MMTableViewInfo, SafeDeviceData;

@interface LoginDeviceInfoViewController : MMUIViewController <PBMessageObserverDelegate>
{
    SafeDeviceData *m_info;
    MMTableViewInfo *m_tableViewInfo;
}

- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)MessageReturnUpdateDevice:(id)arg1 Event:(unsigned int)arg2;
- (void)setDeviceName:(id)arg1;
- (void)editName;
- (void)reloadTableData;
- (void)viewDidLoad;
- (id)initWithDeviceIno:(id)arg1;

@end

