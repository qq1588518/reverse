//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSString, PHCachingImageManager, PHImageRequestOptions, UITableView;
@protocol DWPhotoAlbumControllerDelegate;

@interface DWPhotoAlbumController : UIViewController <UITableViewDelegate, UITableViewDataSource>
{
    UITableView *_tableView;
    id <DWPhotoAlbumControllerDelegate> _delegate;
    NSArray *_dataArray;
    PHImageRequestOptions *_synchronousRequestOptions;
    PHCachingImageManager *_imageManager;
}

@property(retain, nonatomic) PHCachingImageManager *imageManager; // @synthesize imageManager=_imageManager;
@property(retain, nonatomic) PHImageRequestOptions *synchronousRequestOptions; // @synthesize synchronousRequestOptions=_synchronousRequestOptions;
@property(retain, nonatomic) NSArray *dataArray; // @synthesize dataArray=_dataArray;
@property(nonatomic) __weak id <DWPhotoAlbumControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(readonly, nonatomic) UITableView *tableView;
- (void)loadMoreData:(_Bool)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)clickCompleteButton:(id)arg1;
- (void)clickCancelButton:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)dealloc;
- (long long)overrideUserInterfaceStyle;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

