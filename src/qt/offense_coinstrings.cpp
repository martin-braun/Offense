

#include <QtGlobal>

// Automatically generated by extract_strings.py
#ifdef __GNUC__
#define UNUSED __attribute__((unused))
#else
#define UNUSED
#endif
static const char UNUSED *offense_coin_strings[] = {
QT_TRANSLATE_NOOP("offense_coin", ""
"Cannot find the Sapling parameters in the following directory:\n"
"%s\n"
"Please run 'sapling-fetch-params' or './util/fetch-params.sh' and then "
"restart."),
QT_TRANSLATE_NOOP("offense_coin", ""
"Cannot obtain a lock on data directory %s. %s is probably already running."),
QT_TRANSLATE_NOOP("offense_coin", ""
"Cannot start deterministic masternode before enforcement. Remove %s to start "
"as legacy masternode"),
QT_TRANSLATE_NOOP("offense_coin", ""
"Cannot upgrade to Sapling wallet (already running Sapling support). Version: "
"%d"),
QT_TRANSLATE_NOOP("offense_coin", ""
"Distributed under the MIT software license, see the accompanying file "
"COPYING or <http://www.opensource.org/licenses/mit-license.php>."),
QT_TRANSLATE_NOOP("offense_coin", ""
"Enabling Masternode support requires turning on transaction indexing.Please "
"add %s to your configuration and start with %s"),
QT_TRANSLATE_NOOP("offense_coin", ""
"Error: Listening for incoming connections failed (listen returned error %s)"),
QT_TRANSLATE_NOOP("offense_coin", ""
"Error: Unsupported argument %s found. Setting SOCKS version isn't possible "
"anymore, only SOCKS5 proxies are supported."),
QT_TRANSLATE_NOOP("offense_coin", ""
"Failed to create backup, file already exists! This could happen if you "
"restarted wallet in less than 60 seconds. You can continue if you are ok "
"with this."),
QT_TRANSLATE_NOOP("offense_coin", ""
"Invalid -wallet path '%s'. -wallet path should point to a directory where "
"wallet.dat and database/log.?????????? files can be stored, a location where "
"such a directory could be created or (for backwards compatibility) the name "
"of an existing data file in -walletdir (%s)"),
QT_TRANSLATE_NOOP("offense_coin", ""
"Invalid amount for %s: '%s' (must be at least the minimum relay fee of %s to "
"prevent stuck transactions)"),
QT_TRANSLATE_NOOP("offense_coin", ""
"Legacy masternode system disabled. Use %s to start as deterministic "
"masternode"),
QT_TRANSLATE_NOOP("offense_coin", ""
"Please check that your computer's date and time are correct! If your clock "
"is wrong %s will not work properly."),
QT_TRANSLATE_NOOP("offense_coin", ""
"System error while flushing the chainstate after pruning invalid entries. "
"Possible corrupt database."),
QT_TRANSLATE_NOOP("offense_coin", ""
"The block database contains a block which appears to be from the future. "
"This may be due to your computer's date and time being set incorrectly. Only "
"rebuild the block database if you are sure that your computer's date and "
"time are correct"),
QT_TRANSLATE_NOOP("offense_coin", ""
"This file contains all of your private keys in plain text. DO NOT send this "
"file to anyone!"),
QT_TRANSLATE_NOOP("offense_coin", ""
"This is a pre-release test build - use at your own risk - do not use for "
"staking or merchant applications!"),
QT_TRANSLATE_NOOP("offense_coin", ""
"Total length of network version string (%i) exceeds maximum length (%i). "
"Reduce the number or size of %s."),
QT_TRANSLATE_NOOP("offense_coin", ""
"Unable to replay blocks. You will need to rebuild the database using %s."),
QT_TRANSLATE_NOOP("offense_coin", ""
"WARNING: The transaction has been signed and recorded, so the wallet will "
"try to re-send it. Use 'abandontransaction' to cancel it. (txid: %s)"),
QT_TRANSLATE_NOOP("offense_coin", ""
"Warning: %s is set very high! Fees this large could be paid on a single "
"transaction."),
QT_TRANSLATE_NOOP("offense_coin", ""
"Warning: %s is set very high! This is the transaction fee you will pay if "
"you send a transaction."),
QT_TRANSLATE_NOOP("offense_coin", ""
"Warning: Please check that your computer's date and time are correct! If "
"your clock is wrong %s will not work properly."),
QT_TRANSLATE_NOOP("offense_coin", ""
"Warning: The network does not appear to fully agree! Some miners appear to "
"be experiencing issues."),
QT_TRANSLATE_NOOP("offense_coin", ""
"Warning: Wallet file corrupt, data salvaged! Original %s saved as %s in %s; "
"if your balance or transactions are incorrect you should restore from a "
"backup."),
QT_TRANSLATE_NOOP("offense_coin", ""
"Warning: We do not appear to fully agree with our peers! You may need to "
"upgrade, or other nodes may need to upgrade."),
QT_TRANSLATE_NOOP("offense_coin", ""
"Warning: error reading %s! All keys read correctly, but transaction data or "
"address book entries might be missing or incorrect."),
QT_TRANSLATE_NOOP("offense_coin", ""
"\"local\" vote is no longer available with DMNs. Use \"alias\" from the "
"wallet with the voting key."),
QT_TRANSLATE_NOOP("offense_coin", "%s Invalid %s address or hostname: '%s'"),
QT_TRANSLATE_NOOP("offense_coin", "%s corrupt, salvage failed"),
QT_TRANSLATE_NOOP("offense_coin", "%s is not allowed in combination with enabled wallet functionality"),
QT_TRANSLATE_NOOP("offense_coin", "%s is only allowed with a single wallet file"),
QT_TRANSLATE_NOOP("offense_coin", "(must be %d for %s-net)"),
QT_TRANSLATE_NOOP("offense_coin", "A fatal internal error occurred, see debug.log for details"),
QT_TRANSLATE_NOOP("offense_coin", "Active Masternode not initialized."),
QT_TRANSLATE_NOOP("offense_coin", "Calculating money supply..."),
QT_TRANSLATE_NOOP("offense_coin", "Can't generate a change-address key. Please call keypoolrefill first."),
QT_TRANSLATE_NOOP("offense_coin", "Cannot downgrade wallet."),
QT_TRANSLATE_NOOP("offense_coin", "Cannot resolve -%s address: '%s'"),
QT_TRANSLATE_NOOP("offense_coin", "Cannot set %s or %s together with %s"),
QT_TRANSLATE_NOOP("offense_coin", "Cannot upgrade a locked wallet."),
QT_TRANSLATE_NOOP("offense_coin", "Cannot write to data directory '%s'; check permissions."),
QT_TRANSLATE_NOOP("offense_coin", "Change index out of range"),
QT_TRANSLATE_NOOP("offense_coin", "Copyright (C) 2009-%i The Bitcoin Core Developers"),
QT_TRANSLATE_NOOP("offense_coin", "Copyright (C) 2014-%i The Dash Core Developers"),
QT_TRANSLATE_NOOP("offense_coin", "Copyright (C) 2015-%i The %s Developers"),
QT_TRANSLATE_NOOP("offense_coin", "Corrupted block database detected"),
QT_TRANSLATE_NOOP("offense_coin", "Could not find asmap file %s"),
QT_TRANSLATE_NOOP("offense_coin", "Could not open debug log file %s"),
QT_TRANSLATE_NOOP("offense_coin", "Could not parse asmap file %s"),
QT_TRANSLATE_NOOP("offense_coin", "Could not parse masternode.conf"),
QT_TRANSLATE_NOOP("offense_coin", "Deterministic masternodes are not enforced yet"),
QT_TRANSLATE_NOOP("offense_coin", "Do you want to rebuild the block database now?"),
QT_TRANSLATE_NOOP("offense_coin", "Done loading"),
QT_TRANSLATE_NOOP("offense_coin", "Elliptic curve cryptography sanity check failure. Aborting."),
QT_TRANSLATE_NOOP("offense_coin", "Error initializing block database"),
QT_TRANSLATE_NOOP("offense_coin", "Error initializing wallet database environment %s!"),
QT_TRANSLATE_NOOP("offense_coin", "Error loading %s: Wallet corrupted"),
QT_TRANSLATE_NOOP("offense_coin", "Error loading %s: Wallet requires newer version of %s"),
QT_TRANSLATE_NOOP("offense_coin", "Error loading %s\n"),
QT_TRANSLATE_NOOP("offense_coin", "Error loading block database"),
QT_TRANSLATE_NOOP("offense_coin", "Error loading wallet %s. Duplicate %s filename specified."),
QT_TRANSLATE_NOOP("offense_coin", "Error opening block database"),
QT_TRANSLATE_NOOP("offense_coin", "Error reading from database, shutting down."),
QT_TRANSLATE_NOOP("offense_coin", "Error upgrading chainstate database"),
QT_TRANSLATE_NOOP("offense_coin", "Error"),
QT_TRANSLATE_NOOP("offense_coin", "Error: %s must be at least %d MB"),
QT_TRANSLATE_NOOP("offense_coin", "Error: %s must be true if %s is set."),
QT_TRANSLATE_NOOP("offense_coin", "Error: A fatal internal error occured, see debug.log for details"),
QT_TRANSLATE_NOOP("offense_coin", "Error: A fatal internal error occurred, see debug.log for details"),
QT_TRANSLATE_NOOP("offense_coin", "Error: Disk space is low for %s"),
QT_TRANSLATE_NOOP("offense_coin", "Error: Disk space is low!"),
QT_TRANSLATE_NOOP("offense_coin", "Error: Initializing networking failed"),
QT_TRANSLATE_NOOP("offense_coin", "Error: Unsupported argument %s found, use %s."),
QT_TRANSLATE_NOOP("offense_coin", "Error: Unsupported argument %s found. Checklevel must be level 4."),
QT_TRANSLATE_NOOP("offense_coin", "Failed to accept tx in the memory pool (reason: %s)\n"),
QT_TRANSLATE_NOOP("offense_coin", "Failed to delete backup, error: %s"),
QT_TRANSLATE_NOOP("offense_coin", "Failed to listen on any port. Use %s if you want this."),
QT_TRANSLATE_NOOP("offense_coin", "Failed to parse host:port string"),
QT_TRANSLATE_NOOP("offense_coin", "Failed to rescan the wallet during initialization"),
QT_TRANSLATE_NOOP("offense_coin", "Importing..."),
QT_TRANSLATE_NOOP("offense_coin", "Incorrect or no genesis block found. Wrong datadir for network?"),
QT_TRANSLATE_NOOP("offense_coin", "Information"),
QT_TRANSLATE_NOOP("offense_coin", "Initialization sanity check failed. %s is shutting down."),
QT_TRANSLATE_NOOP("offense_coin", "Insufficient funds."),
QT_TRANSLATE_NOOP("offense_coin", "Invalid -masternodeaddr address: %s"),
QT_TRANSLATE_NOOP("offense_coin", "Invalid -masternodeaddr port %d, isn't the same as the peer port %d"),
QT_TRANSLATE_NOOP("offense_coin", "Invalid -masternodeaddr port %d, only %d is supported on %s-net."),
QT_TRANSLATE_NOOP("offense_coin", "Invalid activation height (%s)"),
QT_TRANSLATE_NOOP("offense_coin", "Invalid amount for %s: '%s' (must be at least %s)"),
QT_TRANSLATE_NOOP("offense_coin", "Invalid amount for -%s=<amount>: '%s'"),
QT_TRANSLATE_NOOP("offense_coin", "Invalid masternodeprivkey. Please see the documentation."),
QT_TRANSLATE_NOOP("offense_coin", "Invalid mnoperatorprivatekey. Please see the documentation."),
QT_TRANSLATE_NOOP("offense_coin", "Invalid netmask specified in %s: '%s'"),
QT_TRANSLATE_NOOP("offense_coin", "Invalid network upgrade (%s)"),
QT_TRANSLATE_NOOP("offense_coin", "Invalid port %d detected in masternode.conf"),
QT_TRANSLATE_NOOP("offense_coin", "Invalid status error."),
QT_TRANSLATE_NOOP("offense_coin", "Keypool ran out, please call keypoolrefill first, or unlock the wallet."),
QT_TRANSLATE_NOOP("offense_coin", "Legacy Masternode is obsolete."),
QT_TRANSLATE_NOOP("offense_coin", "Line: %d"),
QT_TRANSLATE_NOOP("offense_coin", "Loading addresses..."),
QT_TRANSLATE_NOOP("offense_coin", "Loading banlist..."),
QT_TRANSLATE_NOOP("offense_coin", "Loading block index..."),
QT_TRANSLATE_NOOP("offense_coin", "Loading budget cache..."),
QT_TRANSLATE_NOOP("offense_coin", "Loading masternode cache..."),
QT_TRANSLATE_NOOP("offense_coin", "Loading masternode payment cache..."),
QT_TRANSLATE_NOOP("offense_coin", "Loading sporks..."),
QT_TRANSLATE_NOOP("offense_coin", "Loading wallet..."),
QT_TRANSLATE_NOOP("offense_coin", "Loading/Pruning invalid outputs..."),
QT_TRANSLATE_NOOP("offense_coin", "MNs synchronization pending..."),
QT_TRANSLATE_NOOP("offense_coin", "Need to specify a port with %s: '%s'"),
QT_TRANSLATE_NOOP("offense_coin", "Network upgrade parameters malformed, expecting %s"),
QT_TRANSLATE_NOOP("offense_coin", "Network upgrade parameters may only be overridden on regtest."),
QT_TRANSLATE_NOOP("offense_coin", "No error"),
QT_TRANSLATE_NOOP("offense_coin", "Not enough file descriptors available."),
QT_TRANSLATE_NOOP("offense_coin", "OS cryptographic RNG sanity check failure. Aborting."),
QT_TRANSLATE_NOOP("offense_coin", "Peers are being disconnected due time differences."),
QT_TRANSLATE_NOOP("offense_coin", "Preparing for resync..."),
QT_TRANSLATE_NOOP("offense_coin", "Reaccepting wallet transactions..."),
QT_TRANSLATE_NOOP("offense_coin", "Replaying blocks..."),
QT_TRANSLATE_NOOP("offense_coin", "Rescanning..."),
QT_TRANSLATE_NOOP("offense_coin", "Shutdown requested over the txs scan. Exiting."),
QT_TRANSLATE_NOOP("offense_coin", "Signing transaction failed"),
QT_TRANSLATE_NOOP("offense_coin", "Specified -walletdir \"%s\" does not exist"),
QT_TRANSLATE_NOOP("offense_coin", "Specified -walletdir \"%s\" is a relative path"),
QT_TRANSLATE_NOOP("offense_coin", "Specified -walletdir \"%s\" is not a directory"),
QT_TRANSLATE_NOOP("offense_coin", "Specified blocks directory \"%s\" does not exist."),
QT_TRANSLATE_NOOP("offense_coin", "Synchronization failed"),
QT_TRANSLATE_NOOP("offense_coin", "Synchronization finished"),
QT_TRANSLATE_NOOP("offense_coin", "Synchronizing budgets..."),
QT_TRANSLATE_NOOP("offense_coin", "Synchronizing masternode winners..."),
QT_TRANSLATE_NOOP("offense_coin", "Synchronizing masternodes..."),
QT_TRANSLATE_NOOP("offense_coin", "Synchronizing sporks..."),
QT_TRANSLATE_NOOP("offense_coin", "The threshold value cannot be less than %s"),
QT_TRANSLATE_NOOP("offense_coin", "This is experimental software."),
QT_TRANSLATE_NOOP("offense_coin", "This is not a deterministic masternode. 'local' option disabled."),
QT_TRANSLATE_NOOP("offense_coin", "This is not a masternode. 'local' option disabled."),
QT_TRANSLATE_NOOP("offense_coin", "This is not a masternode."),
QT_TRANSLATE_NOOP("offense_coin", "This product includes UPnP software written by Thomas Bernard."),
QT_TRANSLATE_NOOP("offense_coin", "Transaction amount too small"),
QT_TRANSLATE_NOOP("offense_coin", "Transaction amounts must be positive"),
QT_TRANSLATE_NOOP("offense_coin", "Transaction canceled."),
QT_TRANSLATE_NOOP("offense_coin", "Transaction must have at least one recipient"),
QT_TRANSLATE_NOOP("offense_coin", "Transaction too large for fee policy"),
QT_TRANSLATE_NOOP("offense_coin", "Transaction too large"),
QT_TRANSLATE_NOOP("offense_coin", "Unable to bind to %s on this computer (bind returned error %s)"),
QT_TRANSLATE_NOOP("offense_coin", "Unable to bind to %s on this computer. %s is probably already running."),
QT_TRANSLATE_NOOP("offense_coin", "Unable to generate initial key!"),
QT_TRANSLATE_NOOP("offense_coin", "Unable to generate keys"),
QT_TRANSLATE_NOOP("offense_coin", "Unable to sign spork message, wrong key?"),
QT_TRANSLATE_NOOP("offense_coin", "Unable to start HTTP server. See debug log for details."),
QT_TRANSLATE_NOOP("offense_coin", "Unknown network specified in %s: '%s'"),
QT_TRANSLATE_NOOP("offense_coin", "Unsupported logging category %s=%s."),
QT_TRANSLATE_NOOP("offense_coin", "Upgrading coins database if needed..."),
QT_TRANSLATE_NOOP("offense_coin", "User Agent comment (%s) contains unsafe characters."),
QT_TRANSLATE_NOOP("offense_coin", "Verifying blocks..."),
QT_TRANSLATE_NOOP("offense_coin", "Verifying wallet(s)..."),
QT_TRANSLATE_NOOP("offense_coin", "Wallet %s resides outside data directory %s"),
QT_TRANSLATE_NOOP("offense_coin", "Wallet needed to be rewritten: restart %s to complete"),
QT_TRANSLATE_NOOP("offense_coin", "Warning"),
QT_TRANSLATE_NOOP("offense_coin", "Warning: This version is obsolete, upgrade required!"),
QT_TRANSLATE_NOOP("offense_coin", "Warning: Unsupported argument %s ignored, use %s"),
QT_TRANSLATE_NOOP("offense_coin", "Warning: Unsupported argument %s ignored, use %s."),
QT_TRANSLATE_NOOP("offense_coin", "You can not start a masternode in litemode"),
QT_TRANSLATE_NOOP("offense_coin", "You need to rebuild the database using %s to change %s"),
QT_TRANSLATE_NOOP("offense_coin", "Zapping all transactions from wallet..."),
};
