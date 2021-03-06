/*
 *     Generated by class-dump 3.2 (32 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol SyncableApp <NSObject>
- (id)syncerForDataType:(long)arg1;
- (id)ownerForDataType:(long)arg1;
- (id)interestedPartiesForDataType:(long)arg1;
- (BOOL)tellInterestedPartiesDataWillBeSyncedForDataType:(long)arg1;
- (void)tellInterestedPartiesDataWasSyncedForDataType:(long)arg1;
- (void)client:(id)arg1 mightWantToSyncEntityNames:(id)arg2;
@end

