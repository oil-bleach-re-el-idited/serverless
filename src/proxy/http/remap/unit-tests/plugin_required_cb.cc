/** @file

  A test plugin for testing Plugin's Dynamic Shared Objects (DSO)

  @section license License

  Licensed to the Apache Software Foundation (ASF) under one
  or more contributor license agreements.  See the NOTICE file
  distributed with this work for additional information
  regarding copyright ownership.  The ASF licenses this file
  to you under the Apache License, Version 2.0 (the
  "License"); you may not use this file except in compliance
  with the License.  You may obtain a copy of the License at

      http://www.apache.org/licenses/LICENSE-2.0

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.

  @section details Details

  Implements code necessary for Reverse Proxy which mostly consists of
  general purpose hostname substitution in URLs.

 */

#include "ts/ts.h"
#include "ts/remap.h"

TSReturnCode
TSRemapInit([[maybe_unused]] TSRemapInterface *api_info, [[maybe_unused]] char *errbuf, [[maybe_unused]] int errbuf_size)
{
  return TS_SUCCESS;
}

TSRemapStatus
TSRemapDoRemap([[maybe_unused]] void *ih, [[maybe_unused]] TSHttpTxn rh, [[maybe_unused]] TSRemapRequestInfo *rri)
{
  return TSREMAP_NO_REMAP;
}
