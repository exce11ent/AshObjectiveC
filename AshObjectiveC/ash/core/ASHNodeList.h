
#import <Foundation/Foundation.h>
#import "ASHSignal1.h"
#import "ASHNode.h"

@interface ASHNodeList : NSObject

@property (nonatomic, strong) ASHNode * head;

@property (nonatomic, strong) ASHNode * tail;

@property (nonatomic, readonly) ASHSignal1 * nodeAdded;

@property (nonatomic, readonly) ASHSignal1 * nodeRemoved;

- (void)addNode:(ASHNode *)node;
- (void)removeNode:(ASHNode *)node;
- (void)removeAll;

- (BOOL)isEmpty;

- (void)swapNode:(ASHNode *)node1
            node:(ASHNode *)node2;

- (void)insertionSortUsingBlock:(float (^)(ASHNode *, ASHNode *))sortBlock;
- (void)mergeSortUsingBlock:(float (^)(ASHNode *, ASHNode *))sortBlock;

@end
