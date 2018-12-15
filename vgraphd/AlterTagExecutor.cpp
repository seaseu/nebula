/* Copyright (c) 2018 - present, VE Software Inc. All rights reserved
 *
 * This source code is licensed under Apache 2.0 License
 *  (found in the LICENSE.Apache file in the root directory)
 */

#include "base/Base.h"
#include "vgraphd/AlterTagExecutor.h"

namespace vesoft {
namespace vgraph {

AlterTagExecutor::AlterTagExecutor(Sentence *sentence,
                                   ExecutionContext *ectx) : Executor(ectx) {
    sentence_ = static_cast<AlterTagSentence*>(sentence);
}


Status AlterTagExecutor::prepare() {
    return Status::OK();
}


void AlterTagExecutor::execute() {
    if (onFinish_) {
        onFinish_();
    }
}

}   // namespace vgraph
}   // namespace vesoft