/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface DAAccountManager : NSObject {
	NSMutableDictionary* _accounts;
	NSMutableDictionary* _accountsToAdd;
	NSMutableDictionary* _accountsToRemove;
	BOOL _accountSaveInProgress;
	int _pendingAccountSetupCount;
}
+(void)vendDaemonManagers:(Class)managers;
+(id)sharedInstance;
-(BOOL)hasActiveAccounts;
-(void)enableDaemon;
-(void)disableDaemon;
-(void)cleanupLaunchdSemaphore;
-(void)_stopAgentMonitoring;
-(void)_startAgentMonitoring;
-(void)_removeStoresForAccountWithID:(id)anId;
-(id)_accountSettingsAccountTypes;
-(BOOL)_saveAllAccountSettings:(BOOL)settings;
-(BOOL)saveAllAccountSettings;
-(BOOL)addAccount:(id)account;
-(BOOL)removeAccount:(id)account;
-(id)accountWithID:(id)anId;
-(id)accountWithPersistentUUID:(id)persistentUUID;
-(id)accounts;
-(id)accountsOfClass:(Class)aClass;
-(id)pendingAccounts;
-(void)addPendingAccountSetup;
-(void)removePendingAccountSetup;
-(BOOL)hasPendingAccountSetup;
-(void)_reloadAccounts;
-(void)_respondToAccountsChangedNotification;
// inherited: -(void)dealloc;
// inherited: -(instancetype)init;
-(void)checkValidityForAccount:(id)account consumer:(id)consumer;
@end

