@interface RedditsViewController : UIViewController

- (void)generateNodes;
- (void)toggleSubredditFolderCollapseForNode:(id)fp8;
- (void)animateNodeChanges;
- (void)addFrontPageSection;
- (id)addSpacerNode;
- (id)addSectionTitleNodeWithTitle:(id)fp8;
- (id)addCustomSubredditNodeWithTitle:(id)fp8 url:(id)fp12;
- (id)addOptionNodeWithTitle:(id)fp8 icon:(id)fp12;
- (id)addOptionNodeWithTitle:(id)fp8 icon:(id)fp12 onTap:(id)fp onSecondary:(void)fp16;
- (void)showPostsForSubreddit:(id)fp8 withTitle:(id)fp12;
- (void)showFolderManagementView;
- (void)dismissFolderManagementView;
- (void)sortFoldersAlphabetically;
- (void)viewDidUnload;
- (void)respondToStyleChange;
- (void)viewWillDisappear:(BOOL)fp8;
- (void)viewWillAppear:(BOOL)fp8;
- (void)viewDidLoad;
- (void)prepareAfterLoad;
- (void)didSwitchUserAccounts;
- (id)init;
- (void)dealloc;
- (void)showRedditEntryViewForFolderNode:(id)fp8;
- (void)addRedditsSection;
- (void)addSectionForSubredditFolder:(id)fp8 editable:(BOOL)fp12;
- (void)showSidebarInfoForSubreddit:(id)fp8;
- (void)syncSubscriptions;
- (id)subredditPrefs;
- (void)setIsSyncing:(BOOL)fp8;
- (BOOL)isSyncing;
- (void)setForceServerRefresh:(BOOL)fp8;
- (BOOL)forceServerRefresh;
- (void)setLoadSubredditsOperation:(id)fp8;
- (id)loadSubredditsOperation;
- (void)setSubscribedReddits:(id)fp8;
- (id)subscribedReddits;
- (void)disableGhosting;
- (void)enableGhostingForNode:(id)fp8;
- (void)tableView:(id)fp8 moveRowAtIndexPath:(id)fp12 toIndexPath:(id)fp16;
- (unsigned int)indexOffsetFromFolderForRow:(unsigned int)fp8;
- (id)folderNodeHousingRow:(unsigned int)fp8;
- (id)tableView:(id)fp8 targetIndexPathForMoveFromRowAtIndexPath:(id)fp12 toProposedIndexPath:(id)fp16;
- (int)tableView:(id)fp8 editingStyleForRowAtIndexPath:(id)fp12;
- (void)tableView:(id)fp8 commitEditingStyle:(int)fp12 forRowAtIndexPath:(id)fp16;
- (BOOL)tableView:(id)fp8 canMoveRowAtIndexPath:(id)fp12;
- (BOOL)tableView:(id)fp8 canEditRowAtIndexPath:(id)fp12;
- (BOOL)tableView:(id)fp8 shouldIndentWhileEditingRowAtIndexPath:(id)fp12;
- (void)disableEditMode;
- (void)enableEditMode;
- (void)setDragDirectionUpward:(BOOL)fp8;
- (BOOL)dragDirectionUpward;
- (void)setGhostView:(id)fp8;
- (id)ghostView;
- (void)setGhostNode:(id)fp8;
- (id)ghostNode;
- (void)addInfoSection;
- (void)showMyProfile;
- (id)titleForUserProfileSection;
- (id)addInfoNodeWithTitle:(id)fp8 icon:(id)fp12 onSelect:(id)fp;
- (void)checkAnnouncements;
- (void)markAnnouncementsAsRead;
- (void)updateNodesWithAnnouncement;
- (void)apiAnnouncementCheckResponse:(id)fp8;
- (void)addAnnouncementSection;
- (void)showAnnouncement;
- (void)setAnnouncementNodesAreAdded:(BOOL)fp8;
- (BOOL)announcementNodesAreAdded;
- (void)setAnnouncementDictionary:(id)fp8;
- (id)announcementDictionary;
- (void)addDiscoverySection;
- (void)showAlienBlueSubreddit;
- (void)subscribeToAlienBlue;
- (void)showDiscovery;
- (void)showRandomSubreddit;
- (void)showLookupUserEntry;
- (void)showManualEntryView;

@end
