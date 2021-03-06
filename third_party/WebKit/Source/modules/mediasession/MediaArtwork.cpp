// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "modules/mediasession/MediaArtwork.h"

#include "core/dom/ExecutionContext.h"
#include "modules/mediasession/MediaArtworkInit.h"
#include "wtf/text/WTFString.h"

namespace blink {

// static
MediaArtwork* MediaArtwork::create(ExecutionContext* context,
                                   const MediaArtworkInit& artwork) {
  return new MediaArtwork(context, artwork);
}

MediaArtwork::MediaArtwork(ExecutionContext* context,
                           const MediaArtworkInit& artwork) {
  m_src = context->completeURL(artwork.src());
  m_sizes = artwork.sizes();
  m_type = artwork.type();
}

String MediaArtwork::src() const {
  return m_src;
}

String MediaArtwork::sizes() const {
  return m_sizes;
}

String MediaArtwork::type() const {
  return m_type;
}

}  // namespace blink
