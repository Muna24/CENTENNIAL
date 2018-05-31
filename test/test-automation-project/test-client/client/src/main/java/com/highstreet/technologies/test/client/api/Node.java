/*
 * Copyright (c) 2016 highstreet technologies GmbH and others.  All rights reserved.
 *
 * This program and the accompanying materials are made available under the
 * terms of the Eclipse Public License v1.0 which accompanies this distribution,
 * and is available at http://www.eclipse.org/legal/epl-v10.html
 */

package com.highstreet.technologies.test.client.api;

import java.util.List;

public interface Node {
	
    public String getNodeId();
    
    public String getIpAddress();
    
	public int getPort();

	public String getUser();

	public String getPassword();
	
	public List<String> getExpectedNetconfCapabilities();
	
	public String toJsonString();

}